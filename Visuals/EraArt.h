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
        float Tilt(float aspect) const { void* __callArgs[] = { &aspect }; return CallStaticValue<float>("Tilt", __callArgs, 1); }
        void* ShownSize(float slot, float aspect) const { void* __callArgs[] = { &slot, &aspect }; return CallStatic("ShownSize", __callArgs, 2); }
        float Longest(float aspect) const { void* __callArgs[] = { &aspect }; return CallStaticValue<float>("Longest", __callArgs, 1); }
        void* For_(void* glyph) const { void* __callArgs[] = { glyph }; return CallStatic("For", __callArgs, 1); }
        void* For_(void* glyph, int era) const { void* __callArgs[] = { glyph, &era }; return CallStatic("For", __callArgs, 2); }
        bool HasArt(void* glyph) const { void* __callArgs[] = { glyph }; return CallStaticValue<bool>("HasArt", __callArgs, 1); }
        void* Path(const char* basePath) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(basePath ? basePath : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Path", __callArgs, 1); }
        void* Path(const char* basePath, int era) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(basePath ? basePath : "") : nullptr; void* __callArgs[] = { managed_0, &era }; return CallStatic("Path", __callArgs, 2); }
        bool HasPathsUnder(const char* prefix) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(prefix ? prefix : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("HasPathsUnder", __callArgs, 1); }
        void* AllPaths() const { return CallStatic("AllPaths", nullptr, 0); }
        float ShownWidth() const { return ReadStaticField<float>("ShownWidth"); }
        float ShownHeight() const { return ReadStaticField<float>("ShownHeight"); }
        float TiltAspect() const { return ReadStaticField<float>("TiltAspect"); }
        float TiltDegrees() const { return ReadStaticField<float>("TiltDegrees"); }
        float TiltWidth() const { return ReadStaticField<float>("TiltWidth"); }
        float TiltHeight() const { return ReadStaticField<float>("TiltHeight"); }
    };
}
