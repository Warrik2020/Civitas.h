#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationNameGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationNameGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationNameGenerator") {}
    public:
        void* Generate(void* cfg, void* usedNames, int culture) const { void* __callArgs[] = { cfg, usedNames, &culture }; return CallStatic("Generate", __callArgs, 3); }
        void* GenerateUnion(const char* leaderName, const char* otherName, void* cfg, void* nameTaken) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(leaderName ? leaderName : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(otherName ? otherName : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, cfg, nameTaken }; return CallStatic("GenerateUnion", __callArgs, 4); }
        void* ShortForm(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("ShortForm", __callArgs, 1); }
        void* Definite(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Definite", __callArgs, 1); }
        void* ToRoman(int n) const { void* __callArgs[] = { &n }; return CallStatic("ToRoman", __callArgs, 1); }
    };
}
