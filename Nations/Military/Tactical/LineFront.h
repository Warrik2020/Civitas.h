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
        void At(float s, void* p, void* n) const { void* args[] = { &s, &p, &n }; Call("At", args, 3); }
        void* PointAt(float s) const { void* args[] = { &s }; return Call("PointAt", args, 1); }
        void* MeanNormal(float s, float half) const { void* args[] = { &s, &half }; return Call("MeanNormal", args, 2); }
        float Wrap(float s) const { void* args[] = { &s }; return CallValue<float>("Wrap", args, 1); }
        float Gap(float a, float b) const { void* args[] = { &a, &b }; return CallValue<float>("Gap", args, 2); }
        float Delta(float a, float b) const { void* args[] = { &a, &b }; return CallValue<float>("Delta", args, 2); }
        float Nearest(void* p, float hint, float& distSq) const { void* args[] = { p, &hint, &distSq }; return CallValue<float>("Nearest", args, 3); }
        int SideOf(void* p, float s) const { void* args[] = { p, &s }; return CallValue<int>("SideOf", args, 2); }
        bool Untangle(int lo, int hi) const { void* args[] = { &lo, &hi }; return CallValue<bool>("Untangle", args, 2); }
        bool FindCrossing(int lo, int hi, int& e1Out, int& e2Out, void* xOut) const { void* args[] = { &lo, &hi, &e1Out, &e2Out, &xOut }; return CallValue<bool>("FindCrossing", args, 5); }
        void CutBetween(int e1, int e2, void* x) const { void* args[] = { &e1, &e2, x }; Call("CutBetween", args, 3); }
        void Stretch(int e1, int e2, void* into) const { void* args[] = { &e1, &e2, into }; Call("Stretch", args, 3); }
        void Empty() const { Call("Empty", nullptr, 0); }
        bool Inside(void* p) const { void* args[] = { p }; return CallValue<bool>("Inside", args, 1); }
        float SignedArea(void* pts) const { void* args[] = { pts }; return CallStaticValue<float>("SignedArea", args, 1); }
        void Touch() const { Call("Touch", nullptr, 0); }
        bool Clear(void* a, void* b) const { void* args[] = { a, b }; return CallValue<bool>("Clear", args, 2); }
        bool FirstCrossing(void* a, void* b, float& s, float& t) const { void* args[] = { a, b, &s, &t }; return CallValue<bool>("FirstCrossing", args, 4); }
        void Normals() const { Call("Normals", nullptr, 0); }
        void Resample() const { Call("Resample", nullptr, 0); }
        float Remap(float s) const { void* args[] = { &s }; return CallValue<float>("Remap", args, 1); }
        void* P() const { return ReadField<void*>("P"); }
        void* N() const { return ReadField<void*>("N"); }
        void* Col0() const { return ReadField<void*>("Col0"); }
        void* Col1() const { return ReadField<void*>("Col1"); }
    };
}
