#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class WarPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "WarPlanner") {}
    public:
        int FortLevelAt(int tile, int nation, void* g) const { void* args[] = { &tile, &nation, g }; return CallStaticValue<int>("FortLevelAt", args, 3); }
        float Overrun(void* pl, void* mil, void* g) const { void* args[] = { pl, mil, g }; return CallStaticValue<float>("Overrun", args, 3); }
        int SlotOfTag(int tag) const { void* args[] = { &tag }; return CallStaticValue<int>("SlotOfTag", args, 1); }
        int Tag(int foe, int slot) const { void* args[] = { &foe, &slot }; return CallStaticValue<int>("Tag", args, 2); }
        int FoeOfTag(int tag) const { void* args[] = { &tag }; return CallStaticValue<int>("FoeOfTag", args, 1); }
        void* OperationsOf(int nationId) const { void* args[] = { &nationId }; return Call("OperationsOf", args, 1); }
        void Forget(int nationId) const { void* args[] = { &nationId }; Call("Forget", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Evaluate(void* mil, void* n, void* ctx) const { void* args[] = { mil, n, ctx }; Call("Evaluate", args, 3); }
        bool EvaluatePart(int part, void* mil, void* n, void* ctx) const { void* args[] = { &part, mil, n, ctx }; return CallValue<bool>("EvaluatePart", args, 4); }
        void Clear() const { Call("Clear", nullptr, 0); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int TagStride() const { return ReadStaticField<int>("TagStride"); }
        int SecondSlot() const { return ReadStaticField<int>("SecondSlot"); }
        int EvaluateParts() const { return ReadStaticField<int>("EvaluateParts"); }
        void* pts() const { return ReadField<void*>("pts"); }
        void* outward() const { return ReadField<void*>("outward"); }
        void* frac() const { return ReadField<void*>("frac"); }
        void* piece() const { return ReadField<void*>("piece"); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* hot() const { return ReadField<void*>("hot"); }
        void SetHot(void* value) const { WriteField<void*>("hot", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* ops() const { return ReadField<void*>("ops"); }
        void* watching() const { return ReadField<void*>("watching"); }
        void* garrison() const { return ReadField<void*>("garrison"); }
        void* garrisonCity() const { return ReadField<void*>("garrisonCity"); }
        int evals() const { return ReadField<int>("evals"); }
        void SetEvals(int value) const { WriteField<int>("evals", value); }
        int lastTiles() const { return ReadField<int>("lastTiles"); }
        void SetLastTiles(int value) const { WriteField<int>("lastTiles", value); }
        int lossTick() const { return ReadField<int>("lossTick"); }
        void SetLossTick(int value) const { WriteField<int>("lossTick", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        bool war() const { return ReadField<bool>("war"); }
        void SetWar(bool value) const { WriteField<bool>("war", value); }
        bool prep() const { return ReadField<bool>("prep"); }
        void SetPrep(bool value) const { WriteField<bool>("prep", value); }
        int edges() const { return ReadField<int>("edges"); }
        void SetEdges(int value) const { WriteField<int>("edges", value); }
        float enemy() const { return ReadField<float>("enemy"); }
        void SetEnemy(float value) const { WriteField<float>("enemy", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int want() const { return ReadField<int>("want"); }
        void SetWant(int value) const { WriteField<int>("want", value); }
    };
}
