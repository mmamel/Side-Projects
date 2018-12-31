def main():

    capNum = int(input("Enter a number \n"));


    print("The prime numbers are: ");
    print(2);
    optimusPrime = [];
    for x in range (3, capNum+1, 1):
        bool = True;
        count = 0;
        boolean = True;

        if(x%2 != 0):
            optimusPrime.append(x);
            count += 1
        else:
            bool = False;

        while(bool==True):
            for y in optimusPrime:

                    if(x%y != 0):
                        count += 1;


            if(count==len(optimusPrime)):
                print(x);
                bool = False;

            else:
                optimusPrime.pop();
                bool = False;









main();
