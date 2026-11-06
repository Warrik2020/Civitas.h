#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerVictoryPoints : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerVictoryPoints(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerVictoryPoints") {}
    public:
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void tiles(void* value) const { WriteField<void*>("tiles", value); }
        void* vp() const { return ReadField<void*>("vp"); }
        void vp(void* value) const { WriteField<void*>("vp", value); }
        void* creditTo() const { return ReadField<void*>("creditTo"); }
        void creditTo(void* value) const { WriteField<void*>("creditTo", value); }
        void* credit() const { return ReadField<void*>("credit"); }
        void credit(void* value) const { WriteField<void*>("credit", value); }
    };
}
