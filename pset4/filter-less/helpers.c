#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++) // LOOP TO CHECK THE HEIGHT
    {
        for (int j = 0; j < width; j++) // LOOP TO CHECK THE WIDTH INSIDE THE HEIGHT
        {
            RGBTRIPLE pixel = image[i][j]; // EXACLY PIXEL OF A IMAGE TO WORK
            int average = round((pixel.rgbtBlue + pixel.rgbtRed + pixel.rgbtGreen) / 3.0); // ROUND A NUMBER TO PASS TO GRAYSCALE
            image[i][j].rgbtBlue = image[i][j].rgbtRed = image[i][j].rgbtGreen = average; // THEN PASS EVERY COLOR TO GRAY.
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            RGBTRIPLE pixel = image[i][j]; //TRANSFORM IN PIXEL IMAGE WIDTH AND HEIGHT

            // FORMULA TO TRANSFORM IN SEPIA
            int sepiaRed = round(.393 * pixel.rgbtRed + .769 * pixel.rgbtGreen + .189 * pixel.rgbtBlue);
            int sepiaGreen = round(.349 * pixel.rgbtRed + .686 * pixel.rgbtGreen + .168 * pixel.rgbtBlue);
            int sepiaBlue = round(.272 * pixel.rgbtRed + .534 * pixel.rgbtGreen + .131 * pixel.rgbtBlue);
            image[i][j].rgbtRed = sepiaRed > 255 ? 255 : sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen > 255 ? 255 : sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue > 255 ? 255 : sepiaBlue;
        }
    }



    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    //TRANSFORMATION
    for (int i = 0; i < height; i++)
    {
        //       j = 4 > 4 = CurPos
        // 1 2 3 4 >  4 3 2 1 -- CURRENT POSITION
        int curPos = 0;
        for (int j = width - 1; j >= 0; j--, curPos++)
        {
            temp[i][curPos] = image[i][j];
        }
    }
    // COPYING THE FINAL RESULT
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    // LOOP TO CHECK THE IMAGE
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++) // LOOP TO CHECK THE IMAGE
        {
            int count = 0;
            int rowCoords[] = {row - 1, row, row + 1};
            int colCoords[] = {col - 1, col, col + 1};
            float totalR = 0;
            float totalG = 0;
            float totalB = 0;

            for (int r = 0; r < 3; r++) // LOOP TO ROWS
            {
                for (int c = 0; c < 3; c++)// LOOP TO COLUMS
                {
                    int curRow = rowCoords[r];
                    int curCol = colCoords[c];
                    if (curRow >= 0 && curRow < height && curCol >= 0 && curCol < width)
                    {
                        RGBTRIPLE pixel = image[curRow][curCol];
                        totalR += pixel.rgbtRed;
                        totalG += pixel.rgbtGreen;
                        totalB += pixel.rgbtBlue;
                        count++;
                    }
                }
            }

            temp[row][col].rgbtRed = round(totalR / count);
            temp[row][col].rgbtGreen = round(totalG / count);
            temp[row][col].rgbtBlue = round(totalB / count);;
        }
    }

    // COPYING THE IMAGE
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }

    return;
}
