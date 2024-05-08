cd ../libft
make re
cd ../libft_tests
#rm libft.a
cp ../libft/libft.a ./
cc calloc_test.c libft.a
./a.out
