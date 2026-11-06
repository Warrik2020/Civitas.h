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
        void* Generate(void* cfg, void* usedNames, int culture) const { void* args[] = { cfg, usedNames, &culture }; return CallStatic("Generate", args, 3); }
        void* GenerateUnion(const char* leaderName, const char* otherName, void* cfg, void* nameTaken) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(leaderName ? leaderName : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(otherName ? otherName : "") : nullptr; void* args[] = { managed_0, managed_1, cfg, nameTaken }; return CallStatic("GenerateUnion", args, 4); }
        void* ShortForm(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("ShortForm", args, 1); }
        void* Definite(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Definite", args, 1); }
        void* ToRoman(int n) const { void* args[] = { &n }; return CallStatic("ToRoman", args, 1); }
    };
}
