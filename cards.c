// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char card_name[3];
//     puts("Enter the card_name: ");
//     fgets(card_name, 3, stdin);
//     int val = 0;
//     if (card_name[0] == 'K')
//     {
//         val = 10;
//     }
//     else if (card_name[0] == 'Q')
//     {
//         val = 10;
//     }
//     else if (card_name[0] == 'J')
//     {
//         val = 10;
//     }
//     else if (card_name[0] == 'A')
//     {
//         val = 11;
//     }
//     else
//     {
//         val = atoi(card_name);
//     }
//     if ((val > 2) && (val < 7 ))
//     {
//         puts("Count has gone up");
//     }
//     else if (val == 10)
//     {
//         puts("Count has gone down");
//     }
//     printf("The card value is: %i\n", val);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card name: ");
    fgets(card_name, 3, stdin);
    int val = 0;

    switch(card_name[0])
    {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
        break;
        
        case 'A':
          val = 11;
        break;

        default:
        val = atoi(card_name);
    }
}

