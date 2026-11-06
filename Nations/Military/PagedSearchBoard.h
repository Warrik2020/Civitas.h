#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class PagedSearchBoard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PagedSearchBoard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "PagedSearchBoard") {}
    public:
        void Begin(int count) const { void* args[] = { &count }; Call("Begin", args, 1); }
        void Close() const { Call("Close", nullptr, 0); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
    };
}
