/*
 * struct-type routine returns
 * supported since 2014-03-11
 */

typedef struct foo {
	int a[10];
	int b[20];
	char *foo;
} thing;

thing routine(void) {
	thing bob;
	bob.a[0] = 123;
	bob.foo = "hahah";
	return bob;
}

thing routine2(void) {
	thing bob;
	thing *ptr = &bob;
	bob.a[0] = 456;
	return *ptr;
}

main()
{
	thing foo = routine();
	thing bar = routine2();
	printf("%d\n", foo.a[0]);
	printf("%s\n", foo.foo);
	printf("%d\n", bar.a[0]);
}
