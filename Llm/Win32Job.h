#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class Win32Job : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Win32Job(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "Win32Job") {}
    public:
        void* TryCreate() const { return CallStatic("TryCreate", nullptr, 0); }
        bool Assign(void* p) const { void* args[] = { p }; return CallValue<bool>("Assign", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        uint64_t ReadOperationCount() const { return ReadField<uint64_t>("ReadOperationCount"); }
        void SetReadOperationCount(uint64_t value) const { WriteField<uint64_t>("ReadOperationCount", value); }
        uint64_t WriteOperationCount() const { return ReadField<uint64_t>("WriteOperationCount"); }
        void SetWriteOperationCount(uint64_t value) const { WriteField<uint64_t>("WriteOperationCount", value); }
        uint64_t OtherOperationCount() const { return ReadField<uint64_t>("OtherOperationCount"); }
        void SetOtherOperationCount(uint64_t value) const { WriteField<uint64_t>("OtherOperationCount", value); }
        uint64_t ReadTransferCount() const { return ReadField<uint64_t>("ReadTransferCount"); }
        void SetReadTransferCount(uint64_t value) const { WriteField<uint64_t>("ReadTransferCount", value); }
        uint64_t WriteTransferCount() const { return ReadField<uint64_t>("WriteTransferCount"); }
        void SetWriteTransferCount(uint64_t value) const { WriteField<uint64_t>("WriteTransferCount", value); }
        uint64_t OtherTransferCount() const { return ReadField<uint64_t>("OtherTransferCount"); }
        void SetOtherTransferCount(uint64_t value) const { WriteField<uint64_t>("OtherTransferCount", value); }
        int64_t PerProcessUserTimeLimit() const { return ReadField<int64_t>("PerProcessUserTimeLimit"); }
        void SetPerProcessUserTimeLimit(int64_t value) const { WriteField<int64_t>("PerProcessUserTimeLimit", value); }
        int64_t PerJobUserTimeLimit() const { return ReadField<int64_t>("PerJobUserTimeLimit"); }
        void SetPerJobUserTimeLimit(int64_t value) const { WriteField<int64_t>("PerJobUserTimeLimit", value); }
        uint32_t LimitFlags() const { return ReadField<uint32_t>("LimitFlags"); }
        void SetLimitFlags(uint32_t value) const { WriteField<uint32_t>("LimitFlags", value); }
        void* MinimumWorkingSetSize() const { return ReadField<void*>("MinimumWorkingSetSize"); }
        void SetMinimumWorkingSetSize(void* value) const { WriteField<void*>("MinimumWorkingSetSize", value); }
        void* MaximumWorkingSetSize() const { return ReadField<void*>("MaximumWorkingSetSize"); }
        void SetMaximumWorkingSetSize(void* value) const { WriteField<void*>("MaximumWorkingSetSize", value); }
        uint32_t ActiveProcessLimit() const { return ReadField<uint32_t>("ActiveProcessLimit"); }
        void SetActiveProcessLimit(uint32_t value) const { WriteField<uint32_t>("ActiveProcessLimit", value); }
        void* Affinity() const { return ReadField<void*>("Affinity"); }
        void SetAffinity(void* value) const { WriteField<void*>("Affinity", value); }
        uint32_t PriorityClass() const { return ReadField<uint32_t>("PriorityClass"); }
        void SetPriorityClass(uint32_t value) const { WriteField<uint32_t>("PriorityClass", value); }
        uint32_t SchedulingClass() const { return ReadField<uint32_t>("SchedulingClass"); }
        void SetSchedulingClass(uint32_t value) const { WriteField<uint32_t>("SchedulingClass", value); }
        void* BasicLimitInformation() const { return ReadField<void*>("BasicLimitInformation"); }
        void SetBasicLimitInformation(void* value) const { WriteField<void*>("BasicLimitInformation", value); }
        void* IoInfo() const { return ReadField<void*>("IoInfo"); }
        void SetIoInfo(void* value) const { WriteField<void*>("IoInfo", value); }
        void* ProcessMemoryLimit() const { return ReadField<void*>("ProcessMemoryLimit"); }
        void SetProcessMemoryLimit(void* value) const { WriteField<void*>("ProcessMemoryLimit", value); }
        void* JobMemoryLimit() const { return ReadField<void*>("JobMemoryLimit"); }
        void SetJobMemoryLimit(void* value) const { WriteField<void*>("JobMemoryLimit", value); }
        void* PeakProcessMemoryUsed() const { return ReadField<void*>("PeakProcessMemoryUsed"); }
        void SetPeakProcessMemoryUsed(void* value) const { WriteField<void*>("PeakProcessMemoryUsed", value); }
        void* PeakJobMemoryUsed() const { return ReadField<void*>("PeakJobMemoryUsed"); }
        void SetPeakJobMemoryUsed(void* value) const { WriteField<void*>("PeakJobMemoryUsed", value); }
    };
}
