#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyEffects : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyEffects(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyEffects") {}
    public:
        int TreesOf(int kind, int scope) const { void* __callArgs[] = { &kind, &scope }; return CallStaticValue<int>("TreesOf", __callArgs, 2); }
        bool TryFindLegacy(const char* key, void* spec, float& valueMul) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &spec, &valueMul }; return CallStaticValue<bool>("TryFindLegacy", __callArgs, 3); }
        bool TryFind(const char* key, void* spec) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &spec }; return CallStaticValue<bool>("TryFind", __callArgs, 2); }
        void* Of(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Of", __callArgs, 1); }
        bool TryScope(const char* key, int& scope) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &scope }; return CallStaticValue<bool>("TryScope", __callArgs, 2); }
        bool IsRealm(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsRealm", __callArgs, 1); }
        bool Helps(void* e) const { void* __callArgs[] = { &e }; return CallStaticValue<bool>("Helps", __callArgs, 1); }
        void Fold(void* m, void* e) const { void* __callArgs[] = { &m, &e }; CallStatic("Fold", __callArgs, 2); }
        void Append(void* sb, void* e, void* names, bool colorize) const { void* __callArgs[] = { sb, &e, names, &colorize }; CallStatic("Append", __callArgs, 4); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* ScopeKeys() const { return ReadStaticField<void*>("ScopeKeys"); }
    };
}
