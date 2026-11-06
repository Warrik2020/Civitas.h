#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlamaPaths : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlamaPaths(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlamaPaths") {}
    public:
        void Prime() const { CallStatic("Prime", nullptr, 0); }
        void* ExeIn(const char* subfolder) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(subfolder ? subfolder : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("ExeIn", args, 1); }
        void* ResolveServerExe() const { return CallStatic("ResolveServerExe", nullptr, 0); }
        void* ResolveModel() const { return CallStatic("ResolveModel", nullptr, 0); }
        void* DescribeMissing() const { return CallStatic("DescribeMissing", nullptr, 0); }
        void* PlayerMissing() const { return CallStatic("PlayerMissing", nullptr, 0); }
        void* BinariesFolder() const { return ReadStaticField<void*>("BinariesFolder"); }
        void* CudaSubfolder() const { return ReadStaticField<void*>("CudaSubfolder"); }
        void* VulkanSubfolder() const { return ReadStaticField<void*>("VulkanSubfolder"); }
        void* CpuSubfolder() const { return ReadStaticField<void*>("CpuSubfolder"); }
        void* MacSubfolder() const { return ReadStaticField<void*>("MacSubfolder"); }
        void* ModelsFolder() const { return ReadStaticField<void*>("ModelsFolder"); }
        void* ModelExtension() const { return ReadStaticField<void*>("ModelExtension"); }
        void* ExeOverrideKey() const { return ReadStaticField<void*>("ExeOverrideKey"); }
        void* ModelOverrideKey() const { return ReadStaticField<void*>("ModelOverrideKey"); }
        void* PointerFileName() const { return ReadStaticField<void*>("PointerFileName"); }
    };
}
