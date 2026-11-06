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
        int Resolve(void* p) const { void* __callArgs[] = { &p }; return CallStaticValue<int>("Resolve", __callArgs, 1); }
        int AgeOf(int tech) const { void* __callArgs[] = { &tech }; return CallStaticValue<int>("AgeOf", __callArgs, 1); }
        void* Row(int age) const { void* __callArgs[] = { &age }; return CallStatic("Row", __callArgs, 1); }
        float SuppressionGainOf(uint8_t age) const { void* __callArgs[] = { &age }; return CallStaticValue<float>("SuppressionGainOf", __callArgs, 1); }
        void* Of(void* p) const { void* __callArgs[] = { &p }; return CallStatic("Of", __callArgs, 1); }
        void* Of(void* p, bool heldGround) const { void* __callArgs[] = { &p, &heldGround }; return CallStatic("Of", __callArgs, 2); }
    };
}
