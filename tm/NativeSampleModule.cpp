#include "NativeSampleModule.h"

namespace facebook::react {

NativeSampleModule::NativeSampleModule(std::shared_ptr<CallInvoker> jsInvoker)
    : NativeSampleModuleCxxSpec(std::move(jsInvoker)) {}

std::string NativeSampleModule::reverseString(jsi::Runtime& rt, std::string input) {
  return std::string(input.rbegin(), input.rend());
}

// Add this inside the NativeSampleModule namespace in NativeSampleModule.cpp

int NativeSampleModule::addTwoNumbers(jsi::Runtime& rt, int a, int b) {
    return a + b;
}


} // namespace facebook::react