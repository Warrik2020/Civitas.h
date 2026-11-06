#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechCatalog") {}
    public:
        void* Get(int index) const { void* args[] = { &index }; return CallStatic("Get", args, 1); }
        int IndexOf(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<int>("IndexOf", args, 1); }
        int UnlockTechFor(int t) const { void* args[] = { &t }; return CallStaticValue<int>("UnlockTechFor", args, 1); }
        bool IsLockedCategory(int c) const { void* args[] = { &c }; return CallStaticValue<bool>("IsLockedCategory", args, 1); }
        void* CategoryName(int c) const { void* args[] = { &c }; return CallStatic("CategoryName", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
