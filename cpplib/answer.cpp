#include <pybind11/pybind11.h>

int answer_to_everything() {
    return 42;
}

PYBIND11_MODULE(answer, m) {
    m.doc() = "Python bindings for C++ 'answer' library";
    m.def("answer_to_everything", &answer_to_everything, "The answer to everything");
}
