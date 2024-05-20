int n = v.size(); //this will provide the size of the vector..
    int count = 0;
    int element; // we have not taken in account any element in the intial matter...therefore we apply moore's voting element
                 //which we will provide element that can ,cn be majority element....
                 //below is the implementation of the algorithm..
    for (int i = 0; i < n;i++)
    {
        if(count==0) //<---- iska mtlb ki maine koi element abhi tak consideration main nhi liya hai...
        {
            element = v[i]; //<------- at this step we have consider the step ...
            count = 1;      // we have consider the element then the obviously count =1;
        }

        else if (v[i]==element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // now the variable "element " have stored the " possible majority element";
    //we have to verify whether it is or not ..
    int count1 = 0;
    for (int i = 0; i < n;i++)
    {
        if(v[i]==element)
        {
            count1++;
        }
    }

    //now since we have count the element count which could be possible majroity...
    if(count1>(n/2))
    {
        return element;
    }

    return -1;