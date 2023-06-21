,>,       Read the first number (ASCII value) into cell 0
---------- Subtract 48 to convert ASCII to actual digit value
>,        Read the second number (ASCII value) into cell 1
---------- Subtract 48 to convert ASCII to actual digit value
[          Start of addition loop
    ----   Decrement the first number in cell 0
    >>>>>  Move the pointer to cell 3 (temporary storage)
    +       Increment the temporary storage to accumulate the sum
    <<<<   Move the pointer back to cell 0
    -       Decrement the second number in cell 1
]
>>>>.      Move the pointer to cell 4 (output)
++++++++.>  Print the accumulated sum
