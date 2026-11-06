#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuBattle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuBattle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuBattle") {}
    public:
        void SetColourVision(int mode) const { void* __callArgs[] = { &mode }; Call("SetColourVision", __callArgs, 1); }
        float BaseLineX(float y) const { void* __callArgs[] = { &y }; return CallStaticValue<float>("BaseLineX", __callArgs, 1); }
        void Step(float dt) const { void* __callArgs[] = { &dt }; Call("Step", __callArgs, 1); }
        float SoftAlpha(float r) const { void* __callArgs[] = { &r }; return CallStaticValue<float>("SoftAlpha", __callArgs, 1); }
        void EmitGround(void* m, void* white) const { void* __callArgs[] = { m, white }; Call("EmitGround", __callArgs, 2); }
        void EmitUnits(void* m, void* cells, void* white) const { void* __callArgs[] = { m, cells, white }; Call("EmitUnits", __callArgs, 3); }
        void EmitAir(void* m) const { void* __callArgs[] = { m }; Call("EmitAir", __callArgs, 1); }
        float Aspect() const { return ReadStaticField<float>("Aspect"); }
        int Samples() const { return ReadStaticField<int>("Samples"); }
        float UnitHalfH() const { return ReadStaticField<float>("UnitHalfH"); }
        void* Line() const { return ReadField<void*>("Line"); }
        void* Normal() const { return ReadField<void*>("Normal"); }
    };
}
