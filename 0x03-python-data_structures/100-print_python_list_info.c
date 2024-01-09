#include <Python.h>
#include <object.h>
#include <listobject.h>
void print_python_list_info(PyObject *p);
{
	longn int size = PyList_size(p);
	int i;
	PyListobject *obj = (pyListobject *)p;
	printf("[*] size of the python List = %li\n", size);
	print("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, py_TYPE(obj->ob_item[i])->tp_name);
