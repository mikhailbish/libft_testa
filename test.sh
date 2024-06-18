cd ../libft
make re
make bonus
cd ../libft_tests
#rm libft.a
cp ../libft/libft.a ./
cc tester.c libft.a
./a.out
