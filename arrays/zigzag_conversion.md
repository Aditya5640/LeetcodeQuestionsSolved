Initialize currentrow integer and goingdown boolean.
if numrows==1 then return string s.
for each character c
{
    rows[currentRow] += c;

    if(currentRow == 0)
        goingDown = true;

    if(currentRow == numRows - 1)
        goingDown = false;

    if(goingDown)
        currentRow++;
    else
        currentRow--;
}
store the vector<string> rows in a string "result" using for loop and return the result:
string result = "";
        for(int i=0;i<numRows;i++)
        {
            result += rows[i];
        }
        return result;;
    }
