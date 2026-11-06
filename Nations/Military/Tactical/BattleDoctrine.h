#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleDoctrine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleDoctrine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleDoctrine") {}
    public:
        int Resolve(void* p) const { void* args[] = { &p }; return CallStaticValue<int>("Resolve", args, 1); }
        int AgeOf(int tech) const { void* args[] = { &tech }; return CallStaticValue<int>("AgeOf", args, 1); }
        void* Row(int age) const { void* args[] = { &age }; return CallStatic("Row", args, 1); }
        float SuppressionGainOf(uint8_t age) const { void* args[] = { &age }; return CallStaticValue<float>("SuppressionGainOf", args, 1); }
        void* Of(void* p) const { void* args[] = { &p }; return CallStatic("Of", args, 1); }
        void* Of(void* p, bool heldGround) const { void* args[] = { &p, &heldGround }; return CallStatic("Of", args, 2); }
    };
}
