#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyCond : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyCond(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyCond") {}
    public:
        int TreesOf(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<int>("TreesOf", __callArgs, 1); }
        void* ParseAll(void* words, int start, void* into) const { void* __callArgs[] = { words, &start, into }; return CallStatic("ParseAll", __callArgs, 3); }
        bool All(void* conds, void* f) const { void* __callArgs[] = { conds, &f }; return CallStaticValue<bool>("All", __callArgs, 2); }
        bool Holds(void* f) const { void* __callArgs[] = { &f }; return CallValue<bool>("Holds", __callArgs, 1); }
        bool IsMonarchy(int g) const { void* __callArgs[] = { &g }; return CallStaticValue<bool>("IsMonarchy", __callArgs, 1); }
        bool IsPopular(int g) const { void* __callArgs[] = { &g }; return CallStaticValue<bool>("IsPopular", __callArgs, 1); }
        bool IsAutocracy(int g) const { void* __callArgs[] = { &g }; return CallStaticValue<bool>("IsAutocracy", __callArgs, 1); }
        void* Describe() const { return Call("Describe", nullptr, 0); }
        void* ToString() const { return Call("ToString", nullptr, 0); }
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        bool negate() const { return ReadField<bool>("negate"); }
        void negate(bool value) const { WriteField<bool>("negate", value); }
        uint8_t op() const { return ReadField<uint8_t>("op"); }
        void op(uint8_t value) const { WriteField<uint8_t>("op", value); }
        float number() const { return ReadField<float>("number"); }
        void number(float value) const { WriteField<float>("number", value); }
        void* Flags() const { return ReadStaticField<void*>("Flags"); }
        void* Numbers() const { return ReadStaticField<void*>("Numbers"); }
    };
}
