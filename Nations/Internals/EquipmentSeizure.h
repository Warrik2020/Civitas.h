#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipmentSeizure : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentSeizure(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipmentSeizure") {}
    public:
        float Seize(void* from, void* to, float fraction, int kind, int tick, void* drawings = nullptr) const { void* __callArgs[] = { from, to, &fraction, &kind, &tick, drawings }; return CallStaticValue<float>("Seize", __callArgs, 6); }
        void OnFold(void* deal, int victorId, void* ctx) const { void* __callArgs[] = { &deal, &victorId, &ctx }; CallStatic("OnFold", __callArgs, 3); }
        void OnConquered(int deadId, void* ctx) const { void* __callArgs[] = { &deadId, &ctx }; CallStatic("OnConquered", __callArgs, 2); }
        void* Verb(int kind, bool capital = false) const { void* __callArgs[] = { &kind, &capital }; return CallStatic("Verb", __callArgs, 2); }
    };
}
