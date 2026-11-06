#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineFront : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFront(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineFront") {}
    public:
        void At(float s, void* p, void* n) const { void* __callArgs[] = { &s, &p, &n }; Call("At", __callArgs, 3); }
        void* PointAt(float s) const { void* __callArgs[] = { &s }; return Call("PointAt", __callArgs, 1); }
        void* MeanNormal(float s, float half) const { void* __callArgs[] = { &s, &half }; return Call("MeanNormal", __callArgs, 2); }
        float Wrap(float s) const { void* __callArgs[] = { &s }; return CallValue<float>("Wrap", __callArgs, 1); }
        float Gap(float a, float b) const { void* __callArgs[] = { &a, &b }; return CallValue<float>("Gap", __callArgs, 2); }
        float Delta(float a, float b) const { void* __callArgs[] = { &a, &b }; return CallValue<float>("Delta", __callArgs, 2); }
        float Nearest(void* p, float hint, float& distSq) const { void* __callArgs[] = { p, &hint, &distSq }; return CallValue<float>("Nearest", __callArgs, 3); }
        int SideOf(void* p, float s) const { void* __callArgs[] = { p, &s }; return CallValue<int>("SideOf", __callArgs, 2); }
        bool Untangle(int lo, int hi) const { void* __callArgs[] = { &lo, &hi }; return CallValue<bool>("Untangle", __callArgs, 2); }
        bool FindCrossing(int lo, int hi, int& e1Out, int& e2Out, void* xOut) const { void* __callArgs[] = { &lo, &hi, &e1Out, &e2Out, &xOut }; return CallValue<bool>("FindCrossing", __callArgs, 5); }
        void CutBetween(int e1, int e2, void* x) const { void* __callArgs[] = { &e1, &e2, x }; Call("CutBetween", __callArgs, 3); }
        void Stretch(int e1, int e2, void* into) const { void* __callArgs[] = { &e1, &e2, into }; Call("Stretch", __callArgs, 3); }
        void Empty() const { Call("Empty", nullptr, 0); }
        bool Inside(void* p) const { void* __callArgs[] = { p }; return CallValue<bool>("Inside", __callArgs, 1); }
        float SignedArea(void* pts) const { void* __callArgs[] = { pts }; return CallStaticValue<float>("SignedArea", __callArgs, 1); }
        void Touch() const { Call("Touch", nullptr, 0); }
        bool Clear(void* a, void* b) const { void* __callArgs[] = { a, b }; return CallValue<bool>("Clear", __callArgs, 2); }
        bool FirstCrossing(void* a, void* b, float& s, float& t) const { void* __callArgs[] = { a, b, &s, &t }; return CallValue<bool>("FirstCrossing", __callArgs, 4); }
        void Normals() const { Call("Normals", nullptr, 0); }
        void Resample() const { Call("Resample", nullptr, 0); }
        float Remap(float s) const { void* __callArgs[] = { &s }; return CallValue<float>("Remap", __callArgs, 1); }
        void* P() const { return ReadField<void*>("P"); }
        void* N() const { return ReadField<void*>("N"); }
        void* Col0() const { return ReadField<void*>("Col0"); }
        void* Col1() const { return ReadField<void*>("Col1"); }
    };
}
