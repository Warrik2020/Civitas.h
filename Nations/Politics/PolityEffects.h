#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PolityEffects : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolityEffects(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PolityEffects") {}
    public:
        void Append(void* sb, void* m, float researchMul = 1.0f, float opinionAdd = 0.0f, const char* separator = ", ", const char* emptyText = "no special effects", bool colorize = false) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(emptyText ? emptyText : "") : nullptr; void* __callArgs[] = { sb, &m, &researchMul, &opinionAdd, managed_4, managed_5, &colorize }; CallStatic("Append", __callArgs, 7); }
        void* SenseOf(float delta, bool higherIsBetter) const { void* __callArgs[] = { &delta, &higherIsBetter }; return CallStatic("SenseOf", __callArgs, 2); }
        void* Tint(const char* text, void* sense, bool colorize) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0, sense, &colorize }; return CallStatic("Tint", __callArgs, 3); }
        void* GoodHex() const { return ReadStaticField<void*>("GoodHex"); }
        void* BadHex() const { return ReadStaticField<void*>("BadHex"); }
    };
}
