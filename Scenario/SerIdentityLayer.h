#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerIdentityLayer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerIdentityLayer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerIdentityLayer") {}
    public:
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        void* domRuns() const { return ReadField<void*>("domRuns"); }
        void domRuns(void* value) const { WriteField<void*>("domRuns", value); }
        void* homeRuns() const { return ReadField<void*>("homeRuns"); }
        void homeRuns(void* value) const { WriteField<void*>("homeRuns", value); }
        void* mixBlob() const { return ReadField<void*>("mixBlob"); }
        void mixBlob(void* value) const { WriteField<void*>("mixBlob", value); }
    };
}
