#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class WorkshopSubscriptions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorkshopSubscriptions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "WorkshopSubscriptions") {}
    public:
        void Sync() const { CallStatic("Sync", nullptr, 0); }
        void* DesignFileExtension() const { return ReadStaticField<void*>("DesignFileExtension"); }
        void* ids() const { return ReadField<void*>("ids"); }
        void SetIds(void* value) const { WriteField<void*>("ids", value); }
        void* stems() const { return ReadField<void*>("stems"); }
        void SetStems(void* value) const { WriteField<void*>("stems", value); }
        void* stamps() const { return ReadField<void*>("stamps"); }
        void SetStamps(void* value) const { WriteField<void*>("stamps", value); }
        void* stem() const { return ReadField<void*>("stem"); }
        void SetStem(void* value) const { WriteField<void*>("stem", value); }
        uint32_t stamp() const { return ReadField<uint32_t>("stamp"); }
        void SetStamp(uint32_t value) const { WriteField<uint32_t>("stamp", value); }
    };
}
