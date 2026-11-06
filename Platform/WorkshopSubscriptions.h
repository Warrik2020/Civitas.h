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
    };
}
