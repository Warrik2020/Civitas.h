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
        uint64_t ItemOf(void* d) const { void* args[] = { d }; return CallStaticValue<uint64_t>("ItemOf", args, 1); }
        bool Enqueue(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Enqueue", args, 1); }
        void Pump() const { CallStatic("Pump", nullptr, 0); }
        void* FileExtension() const { return ReadStaticField<void*>("FileExtension"); }
        void* Visibility() const { return ReadStaticField<void*>("Visibility"); }
        void SetVisibility(void* value) const { WriteStaticField<void*>("Visibility", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* design() const { return ReadField<void*>("design"); }
        void SetDesign(void* value) const { WriteField<void*>("design", value); }
    };
}
