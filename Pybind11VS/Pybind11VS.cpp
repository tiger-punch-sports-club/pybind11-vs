#include <Python.h>
#include <pybind11/embed.h>

int main()
{
	pybind11::scoped_interpreter guard{};

	auto sys = pybind11::module::import("sys");
	pybind11::print(sys.attr("path"));

}