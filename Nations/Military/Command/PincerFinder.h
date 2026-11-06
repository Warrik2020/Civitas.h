#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class PincerFinder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PincerFinder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "PincerFinder") {}
    public:
        void* FindEnemySalient(void* border, int nation, int foe, void* grid, void* foeMil, void* cfg, int tick, int foeCapital) const { void* args[] = { border, &nation, &foe, grid, foeMil, cfg, &tick, &foeCapital }; return CallStatic("FindEnemySalient", args, 8); }
        void* FindOwnSalient(void* border, int nation, int foe, void* grid, void* ownMil, void* foeMil, void* cfg, int tick) const { void* args[] = { border, &nation, &foe, grid, ownMil, foeMil, cfg, &tick }; return CallStatic("FindOwnSalient", args, 8); }
        float SegmentDistSq(void* p, void* a, void* b) const { void* args[] = { p, a, b }; return CallStaticValue<float>("SegmentDistSq", args, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        bool Contains(int key) const { void* args[] = { &key }; return CallValue<bool>("Contains", args, 1); }
        void Add(int key) const { void* args[] = { &key }; Call("Add", args, 1); }
        bool found() const { return ReadField<bool>("found"); }
        void SetFound(bool value) const { WriteField<bool>("found", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void SetB(void* value) const { WriteField<void*>("b", value); }
        void* meet() const { return ReadField<void*>("meet"); }
        void SetMeet(void* value) const { WriteField<void*>("meet", value); }
        void* arcMid() const { return ReadField<void*>("arcMid"); }
        void SetArcMid(void* value) const { WriteField<void*>("arcMid", value); }
        int cells() const { return ReadField<int>("cells"); }
        void SetCells(int value) const { WriteField<int>("cells", value); }
        float inside() const { return ReadField<float>("inside"); }
        void SetInside(float value) const { WriteField<float>("inside", value); }
        float vp() const { return ReadField<float>("vp"); }
        void SetVp(float value) const { WriteField<float>("vp", value); }
        float against() const { return ReadField<float>("against"); }
        void SetAgainst(float value) const { WriteField<float>("against", value); }
        float ownNear() const { return ReadField<float>("ownNear"); }
        void SetOwnNear(float value) const { WriteField<float>("ownNear", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        int i() const { return ReadField<int>("i"); }
        void SetI(int value) const { WriteField<int>("i", value); }
        int j() const { return ReadField<int>("j"); }
        void SetJ(int value) const { WriteField<int>("j", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void SetRatio(float value) const { WriteField<float>("ratio", value); }
    };
}
