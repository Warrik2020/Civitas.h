#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPalette : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPalette(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPalette") {}
    public:
        void* Hex(int rgb, float a = 1f) const { void* args[] = { &rgb, &a }; return CallStatic("Hex", args, 2); }
        void* At(void* c, float alpha) const { void* args[] = { c, &alpha }; return CallStatic("At", args, 2); }
        void* SurfaceDeep() const { return ReadStaticField<void*>("SurfaceDeep"); }
        void* Surface() const { return ReadStaticField<void*>("Surface"); }
        void* SurfaceRaised() const { return ReadStaticField<void*>("SurfaceRaised"); }
        void* SurfaceInset() const { return ReadStaticField<void*>("SurfaceInset"); }
        void* Border() const { return ReadStaticField<void*>("Border"); }
        void* BorderStrong() const { return ReadStaticField<void*>("BorderStrong"); }
        void* Accent() const { return ReadStaticField<void*>("Accent"); }
        void* AccentDim() const { return ReadStaticField<void*>("AccentDim"); }
        void* AccentBright() const { return ReadStaticField<void*>("AccentBright"); }
        void* AccentRim() const { return ReadStaticField<void*>("AccentRim"); }
        void* FaceTop() const { return ReadStaticField<void*>("FaceTop"); }
        void* TextPrimary() const { return ReadStaticField<void*>("TextPrimary"); }
        void* TextMuted() const { return ReadStaticField<void*>("TextMuted"); }
        void* TextFaint() const { return ReadStaticField<void*>("TextFaint"); }
        void* Positive() const { return ReadStaticField<void*>("Positive"); }
        void* Negative() const { return ReadStaticField<void*>("Negative"); }
        void* Warning() const { return ReadStaticField<void*>("Warning"); }
        void* Scrim() const { return ReadStaticField<void*>("Scrim"); }
        void* Shadow() const { return ReadStaticField<void*>("Shadow"); }
        void* ButtonFace() const { return ReadStaticField<void*>("ButtonFace"); }
        void* AccentWash() const { return ReadStaticField<void*>("AccentWash"); }
        void* AccentRing() const { return ReadStaticField<void*>("AccentRing"); }
        void* TipPlate() const { return ReadStaticField<void*>("TipPlate"); }
        void* LineHold() const { return ReadStaticField<void*>("LineHold"); }
        void* LineLimit() const { return ReadStaticField<void*>("LineLimit"); }
        void* LineFallback() const { return ReadStaticField<void*>("LineFallback"); }
        void* StatusFighting() const { return ReadStaticField<void*>("StatusFighting"); }
        void* StatusCutOff() const { return ReadStaticField<void*>("StatusCutOff"); }
        void* StatusShort() const { return ReadStaticField<void*>("StatusShort"); }
        void* OwnSide() const { return ReadStaticField<void*>("OwnSide"); }
        void* FoeSide() const { return ReadStaticField<void*>("FoeSide"); }
        void* Strength() const { return ReadStaticField<void*>("Strength"); }
        void* Routing() const { return ReadStaticField<void*>("Routing"); }
        void* Invisible() const { return ReadStaticField<void*>("Invisible"); }
    };
}
