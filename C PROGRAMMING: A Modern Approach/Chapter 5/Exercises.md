1. (a) 1

   (b) 1

   (c) 1

   (d) 0

2. (a) 1

   (b) 1

   (c) 1

   (d) 1

3. (a) 1 3 4 5

   (b) 0 7 8 9

   (c) 1 8 8 9

   (d) 1 2 1 1

4. `i < j ? -1 : i == j ? 0 : 1;`

5. This if statement is legal. But it always print 'n is between 1 and 10'. Becuase result of `n >= 1`is always 0 or 1. So (0 or 1) <= 10 is always true. So if n is equal to 0, this statement print 'n is between 1 and 10'.

6. This if statement is legal. But it print 'n is between 1 and 10' only when n is -9. So when n is equal to 5, it does nothing.

7. When i is 17, it print 17.And when i is -17, it print 17 too.

8. `age >= 13 && age <= 19 ? teenager = true : teenager = false;`

9. Two if statements are equivalent.

10. onetwo

11. ```c
    switch (area_code) {
      case 229: 
        printf("Albany\n");
        break;
      case 404: 
      case 470: 
      case 678:
      case 770:
        printf("Atlanta\n");
        break;
      case 478:
        printf("Macon\n");
        break;
      case 706:
      case 762:
        printf("Columbus\n");
        break;
      case 912:
        printf("Savannnah\n");
        break;
      default:
        printf("Area code not recognized\n");
        break;
    }
    ```