#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NewsLog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NewsLog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NewsLog") {}
    public:
        void* Newest(int i) const { void* __callArgs[] = { &i }; return Call("Newest", __callArgs, 1); }
        bool SetFlavor(int entryId, const char* flavor) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(flavor ? flavor : "") : nullptr; void* __callArgs[] = { &entryId, managed_1 }; return CallValue<bool>("SetFlavor", __callArgs, 2); }
    };
}
