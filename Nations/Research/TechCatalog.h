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
        void* Get(int index) const { void* __callArgs[] = { &index }; return CallStatic("Get", __callArgs, 1); }
        int IndexOf(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<int>("IndexOf", __callArgs, 1); }
        int UnlockTechFor(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("UnlockTechFor", __callArgs, 1); }
        bool IsLockedCategory(int c) const { void* __callArgs[] = { &c }; return CallStaticValue<bool>("IsLockedCategory", __callArgs, 1); }
        void* CategoryName(int c) const { void* __callArgs[] = { &c }; return CallStatic("CategoryName", __callArgs, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
