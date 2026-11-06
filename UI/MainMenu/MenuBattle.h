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
        void SetColourVision(int mode) const { void* args[] = { &mode }; Call("SetColourVision", args, 1); }
        float BaseLineX(float y) const { void* args[] = { &y }; return CallStaticValue<float>("BaseLineX", args, 1); }
        void Step(float dt) const { void* args[] = { &dt }; Call("Step", args, 1); }
        float SoftAlpha(float r) const { void* args[] = { &r }; return CallStaticValue<float>("SoftAlpha", args, 1); }
        void EmitGround(void* m, void* white) const { void* args[] = { m, white }; Call("EmitGround", args, 2); }
        void EmitUnits(void* m, void* cells, void* white) const { void* args[] = { m, cells, white }; Call("EmitUnits", args, 3); }
        void EmitAir(void* m) const { void* args[] = { m }; Call("EmitAir", args, 1); }
        float Aspect() const { return ReadStaticField<float>("Aspect"); }
        int Samples() const { return ReadStaticField<int>("Samples"); }
        float UnitHalfH() const { return ReadStaticField<float>("UnitHalfH"); }
        void* Line() const { return ReadField<void*>("Line"); }
        void* Normal() const { return ReadField<void*>("Normal"); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        float centre() const { return ReadField<float>("centre"); }
        void SetCentre(float value) const { WriteField<float>("centre", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        float power() const { return ReadField<float>("power"); }
        void SetPower(float value) const { WriteField<float>("power", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float man() const { return ReadField<float>("man"); }
        void SetMan(float value) const { WriteField<float>("man", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        int slot() const { return ReadField<int>("slot"); }
        void SetSlot(int value) const { WriteField<int>("slot", value); }
        int reserve() const { return ReadField<int>("reserve"); }
        void SetReserve(int value) const { WriteField<int>("reserve", value); }
        float aimY() const { return ReadField<float>("aimY"); }
        void SetAimY(float value) const { WriteField<float>("aimY", value); }
        float rearDepth() const { return ReadField<float>("rearDepth"); }
        void SetRearDepth(float value) const { WriteField<float>("rearDepth", value); }
        float fireIn() const { return ReadField<float>("fireIn"); }
        void SetFireIn(float value) const { WriteField<float>("fireIn", value); }
        float kick() const { return ReadField<float>("kick"); }
        void SetKick(float value) const { WriteField<float>("kick", value); }
        int burst() const { return ReadField<int>("burst"); }
        void SetBurst(int value) const { WriteField<int>("burst", value); }
        bool arrived() const { return ReadField<bool>("arrived"); }
        void SetArrived(bool value) const { WriteField<bool>("arrived", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* vel() const { return ReadField<void*>("vel"); }
        void SetVel(void* value) const { WriteField<void*>("vel", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        float size0() const { return ReadField<float>("size0"); }
        void SetSize0(float value) const { WriteField<float>("size0", value); }
        float size1() const { return ReadField<float>("size1"); }
        void SetSize1(float value) const { WriteField<float>("size1", value); }
        void* col0() const { return ReadField<void*>("col0"); }
        void SetCol0(void* value) const { WriteField<void*>("col0", value); }
        void* col1() const { return ReadField<void*>("col1"); }
        void SetCol1(void* value) const { WriteField<void*>("col1", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float size() const { return ReadField<float>("size"); }
        void SetSize(float value) const { WriteField<float>("size", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        float smokeIn() const { return ReadField<float>("smokeIn"); }
        void SetSmokeIn(float value) const { WriteField<float>("smokeIn", value); }
        float phase() const { return ReadField<float>("phase"); }
        void SetPhase(float value) const { WriteField<float>("phase", value); }
    };
}
