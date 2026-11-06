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
        float Seize(void* from, void* to, float fraction, int kind, int tick, void* drawings = nullptr) const { void* args[] = { from, to, &fraction, &kind, &tick, drawings }; return CallStaticValue<float>("Seize", args, 6); }
        void OnFold(void* deal, int victorId, void* ctx) const { void* args[] = { &deal, &victorId, &ctx }; CallStatic("OnFold", args, 3); }
        void OnConquered(int deadId, void* ctx) const { void* args[] = { &deadId, &ctx }; CallStatic("OnConquered", args, 2); }
        void* Verb(int kind, bool capital = false) const { void* args[] = { &kind, &capital }; return CallStatic("Verb", args, 2); }
    };
}
