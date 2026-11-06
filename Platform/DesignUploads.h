#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class DesignUploads : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignUploads(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "DesignUploads") {}
    public:
        uint64_t ItemOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<uint64_t>("ItemOf", __callArgs, 1); }
        bool Enqueue(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Enqueue", __callArgs, 1); }
        void Pump() const { CallStatic("Pump", nullptr, 0); }
        void* FileExtension() const { return ReadStaticField<void*>("FileExtension"); }
        void* Visibility() const { return ReadStaticField<void*>("Visibility"); }
        void Visibility(void* value) const { WriteStaticField<void*>("Visibility", value); }
    };
}
