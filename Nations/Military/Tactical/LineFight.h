#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineFight : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFight(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineFight") {}
    public:
        void SetView(void* v) const { void* __callArgs[] = { &v }; Call("SetView", __callArgs, 1); }
        float CounterScale(void* v) const { void* __callArgs[] = { &v }; return CallStaticValue<float>("CounterScale", __callArgs, 1); }
        void EmitGround(void* m, void* v, void* white) const { void* __callArgs[] = { m, &v, white }; Call("EmitGround", __callArgs, 3); }
        float TintReach(void* v) const { void* __callArgs[] = { &v }; return CallStaticValue<float>("TintReach", __callArgs, 1); }
        void PaintTint(void* px, int w, int h, void* area, float reach) const { void* __callArgs[] = { px, &w, &h, area, &reach }; Call("PaintTint", __callArgs, 5); }
        void EmitScars(void* m, void* v) const { void* __callArgs[] = { m, &v }; Call("EmitScars", __callArgs, 2); }
        void* DrawPos(void* b) const { void* __callArgs[] = { b }; return Call("DrawPos", __callArgs, 1); }
        void* CounterHalf(void* v) const { void* __callArgs[] = { &v }; return CallStatic("CounterHalf", __callArgs, 1); }
        bool Merged(void* v) const { void* __callArgs[] = { &v }; return CallStaticValue<bool>("Merged", __callArgs, 1); }
        bool MemberDrawPos(int mi, void* c) const { void* __callArgs[] = { &mi, &c }; return CallValue<bool>("MemberDrawPos", __callArgs, 2); }
        void EmitUnits(void* m, void* v, void* cells, void* white, void* selected, void* own, int hover = -1) const { void* __callArgs[] = { m, &v, cells, white, selected, own, &hover }; Call("EmitUnits", __callArgs, 7); }
        void EmitBox(void* m, void* v, void* white, void* a, void* b, void* c, void* d) const { void* __callArgs[] = { m, &v, white, a, b, c, d }; CallStatic("EmitBox", __callArgs, 7); }
        float FxGrow(void* v) const { void* __callArgs[] = { &v }; return CallStaticValue<float>("FxGrow", __callArgs, 1); }
        void EmitSmoke(void* m, void* v) const { void* __callArgs[] = { m, &v }; Call("EmitSmoke", __callArgs, 2); }
        void EmitAir(void* m, void* v) const { void* __callArgs[] = { m, &v }; Call("EmitAir", __callArgs, 2); }
        void StepLeaving(float dt) const { void* __callArgs[] = { &dt }; Call("StepLeaving", __callArgs, 1); }
        void StepVisual(float dt) const { void* __callArgs[] = { &dt }; Call("StepVisual", __callArgs, 1); }
        void GetCrater(int i, void* pos, float& size) const { void* __callArgs[] = { &i, &pos, &size }; Call("GetCrater", __callArgs, 3); }
        bool SideAt(void* p, float maxDist, int& side) const { void* __callArgs[] = { p, &maxDist, &side }; return CallValue<bool>("SideAt", __callArgs, 3); }
        bool SideAt(void* p, float maxDist, int& side, float& dist, bool nearTroops = false) const { void* __callArgs[] = { p, &maxDist, &side, &dist, &nearTroops }; return CallValue<bool>("SideAt", __callArgs, 5); }
        void Withdraw(int mi) const { void* __callArgs[] = { &mi }; Call("Withdraw", __callArgs, 1); }
        bool Withdrawing(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("Withdrawing", __callArgs, 1); }
        bool WithdrawnClear(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("WithdrawnClear", __callArgs, 1); }
        bool AnyEncircled(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("AnyEncircled", __callArgs, 1); }
        bool Settled(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("Settled", __callArgs, 1); }
        bool Flanked(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("Flanked", __callArgs, 1); }
        bool Encircled(void* b) const { void* __callArgs[] = { b }; return CallValue<bool>("Encircled", __callArgs, 1); }
        bool Moving(void* b) const { void* __callArgs[] = { b }; return CallValue<bool>("Moving", __callArgs, 1); }
        void Route(void* b, void* into) const { void* __callArgs[] = { b, into }; Call("Route", __callArgs, 2); }
        void* Toward(void* b) const { void* __callArgs[] = { b }; return Call("Toward", __callArgs, 1); }
        void Order(int bat, int order) const { void* __callArgs[] = { &bat, &order }; Call("Order", __callArgs, 2); }
        bool SendTo(void* bats, void* at, float reach, bool& attack) const { void* __callArgs[] = { bats, at, &reach, &attack }; return CallValue<bool>("SendTo", __callArgs, 4); }
        void BeginFrame() const { Call("BeginFrame", nullptr, 0); }
        void AddFront(void* line) const { void* __callArgs[] = { line }; Call("AddFront", __callArgs, 1); }
        bool NearestFront(void* p, float reach, int& front, float& s) const { void* __callArgs[] = { p, &reach, &front, &s }; return CallValue<bool>("NearestFront", __callArgs, 4); }
        int AddMember(void* spec, float reach, float backReach = 0.0f) const { void* __callArgs[] = { &spec, &reach, &backReach }; return CallValue<int>("AddMember", __callArgs, 3); }
        void RemoveMember(int mi, bool walkOff = false) const { void* __callArgs[] = { &mi, &walkOff }; Call("RemoveMember", __callArgs, 2); }
        float MenOf(int mi) const { void* __callArgs[] = { &mi }; return CallValue<float>("MenOf", __callArgs, 1); }
        float OrgOf(int mi) const { void* __callArgs[] = { &mi }; return CallValue<float>("OrgOf", __callArgs, 1); }
        void* Centroid(int mi, bool& any) const { void* __callArgs[] = { &mi, &any }; return Call("Centroid", __callArgs, 2); }
        bool InContact(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("InContact", __callArgs, 1); }
        bool Routed(int mi) const { void* __callArgs[] = { &mi }; return CallValue<bool>("Routed", __callArgs, 1); }
        float Pressure(int mi) const { void* __callArgs[] = { &mi }; return CallValue<float>("Pressure", __callArgs, 1); }
        bool FightingNear(void* p, float reach) const { void* __callArgs[] = { p, &reach }; return CallValue<bool>("FightingNear", __callArgs, 2); }
        int NationNear(void* p, int side, float reach) const { void* __callArgs[] = { p, &side, &reach }; return CallValue<int>("NationNear", __callArgs, 3); }
        float DrainDeaths(int mi, int& killerNation) const { void* __callArgs[] = { &mi, &killerNation }; return CallValue<float>("DrainDeaths", __callArgs, 2); }
        void SetAuto(int mi, bool on) const { void* __callArgs[] = { &mi, &on }; Call("SetAuto", __callArgs, 2); }
        void Step(float dt) const { void* __callArgs[] = { &dt }; Call("Step", __callArgs, 1); }
        float TintAlpha() const { return ReadStaticField<float>("TintAlpha"); }
        float CounterHalfH() const { return ReadStaticField<float>("CounterHalfH"); }
        float CounterAspect() const { return ReadStaticField<float>("CounterAspect"); }
        float CounterFullViewMetres() const { return ReadStaticField<float>("CounterFullViewMetres"); }
        float CounterMinScale() const { return ReadStaticField<float>("CounterMinScale"); }
        float CounterMaxScale() const { return ReadStaticField<float>("CounterMaxScale"); }
        int JagSeed() const { return ReadField<int>("JagSeed"); }
        void JagSeed(int value) const { WriteField<int>("JagSeed", value); }
        float MergeViewMetres() const { return ReadStaticField<float>("MergeViewMetres"); }
        float StartRough() const { return ReadField<float>("StartRough"); }
        void StartRough(float value) const { WriteField<float>("StartRough", value); }
        float StartHeld() const { return ReadField<float>("StartHeld"); }
        void StartHeld(float value) const { WriteField<float>("StartHeld", value); }
        void* Fronts() const { return ReadField<void*>("Fronts"); }
        void* Members() const { return ReadField<void*>("Members"); }
        void* Bats() const { return ReadField<void*>("Bats"); }
        float VisualKeep() const { return ReadField<float>("VisualKeep"); }
        void VisualKeep(float value) const { WriteField<float>("VisualKeep", value); }
    };
}
