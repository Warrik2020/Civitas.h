#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Visuals
{
    class EraArt : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EraArt(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Visuals", "EraArt") {}
    public:
        float Tilt(float aspect) const { void* args[] = { &aspect }; return CallStaticValue<float>("Tilt", args, 1); }
        void* ShownSize(float slot, float aspect) const { void* args[] = { &slot, &aspect }; return CallStatic("ShownSize", args, 2); }
        float Longest(float aspect) const { void* args[] = { &aspect }; return CallStaticValue<float>("Longest", args, 1); }
        void* For_(void* glyph) const { void* args[] = { glyph }; return CallStatic("For", args, 1); }
        void* For_(void* glyph, int era) const { void* args[] = { glyph, &era }; return CallStatic("For", args, 2); }
        bool HasArt(void* glyph) const { void* args[] = { glyph }; return CallStaticValue<bool>("HasArt", args, 1); }
        void* Path(const char* basePath) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(basePath ? basePath : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Path", args, 1); }
        void* Path(const char* basePath, int era) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(basePath ? basePath : "") : nullptr; void* args[] = { managed_0, &era }; return CallStatic("Path", args, 2); }
        bool HasPathsUnder(const char* prefix) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(prefix ? prefix : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("HasPathsUnder", args, 1); }
        void* AllPaths() const { return CallStatic("AllPaths", nullptr, 0); }
        float ShownWidth() const { return ReadStaticField<float>("ShownWidth"); }
        float ShownHeight() const { return ReadStaticField<float>("ShownHeight"); }
        float TiltAspect() const { return ReadStaticField<float>("TiltAspect"); }
        float TiltDegrees() const { return ReadStaticField<float>("TiltDegrees"); }
        float TiltWidth() const { return ReadStaticField<float>("TiltWidth"); }
        float TiltHeight() const { return ReadStaticField<float>("TiltHeight"); }
        void* Path() const { return ReadField<void*>("Path"); }
        bool Colour() const { return ReadField<bool>("Colour"); }
        int from() const { return ReadField<int>("from"); }
        void* path() const { return ReadField<void*>("path"); }
        void* paint() const { return ReadField<void*>("paint"); }
        void* glyphs() const { return ReadField<void*>("glyphs"); }
        int from() const { return ReadField<int>("from"); }
        void* basePath() const { return ReadField<void*>("basePath"); }
        void* path() const { return ReadField<void*>("path"); }
    };
}
