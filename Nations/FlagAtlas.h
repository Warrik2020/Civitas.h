#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagAtlas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagAtlas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagAtlas") {}
    public:
        void* KeyAt(int i) const { void* args[] = { &i }; return CallStatic("KeyAt", args, 1); }
        void* Draw() const { return CallStatic("Draw", nullptr, 0); }
        void* Take(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Take", args, 1); }
        void Return_(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; CallStatic("Return", args, 1); }
        void* For_(void* n) const { void* args[] = { n }; return CallStatic("For", args, 1); }
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Get", args, 1); }
    };
}
