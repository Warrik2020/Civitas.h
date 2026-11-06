#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesAxisBill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesAxisBill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesAxisBill") {}
    public:
        float assimilation() const { return ReadField<float>("assimilation"); }
        void SetAssimilation(float value) const { WriteField<float>("assimilation", value); }
        float zoneAssimilation() const { return ReadField<float>("zoneAssimilation"); }
        void SetZoneAssimilation(float value) const { WriteField<float>("zoneAssimilation", value); }
        float guard() const { return ReadField<float>("guard"); }
        void SetGuard(float value) const { WriteField<float>("guard", value); }
        float orders() const { return ReadField<float>("orders"); }
        void SetOrders(float value) const { WriteField<float>("orders", value); }
    };
}
