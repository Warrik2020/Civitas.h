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
        int TreesOf(int kind, int scope) const { void* args[] = { &kind, &scope }; return CallStaticValue<int>("TreesOf", args, 2); }
        bool TryFindLegacy(const char* key, void* spec, float& valueMul) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, &spec, &valueMul }; return CallStaticValue<bool>("TryFindLegacy", args, 3); }
        bool TryFind(const char* key, void* spec) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, &spec }; return CallStaticValue<bool>("TryFind", args, 2); }
        void* Of(int kind) const { void* args[] = { &kind }; return CallStatic("Of", args, 1); }
        bool TryScope(const char* key, int& scope) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, &scope }; return CallStaticValue<bool>("TryScope", args, 2); }
        bool IsRealm(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsRealm", args, 1); }
        bool Helps(void* e) const { void* args[] = { &e }; return CallStaticValue<bool>("Helps", args, 1); }
        void Fold(void* m, void* e) const { void* args[] = { &m, &e }; CallStatic("Fold", args, 2); }
        void Append(void* sb, void* e, void* names, bool colorize) const { void* args[] = { sb, &e, names, &colorize }; CallStatic("Append", args, 4); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* ScopeKeys() const { return ReadStaticField<void*>("ScopeKeys"); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        bool percent() const { return ReadField<bool>("percent"); }
        void SetPercent(bool value) const { WriteField<bool>("percent", value); }
        bool mul() const { return ReadField<bool>("mul"); }
        void SetMul(bool value) const { WriteField<bool>("mul", value); }
        int good() const { return ReadField<int>("good"); }
        void SetGood(int value) const { WriteField<int>("good", value); }
        bool scoped() const { return ReadField<bool>("scoped"); }
        void SetScoped(bool value) const { WriteField<bool>("scoped", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
    };
}
