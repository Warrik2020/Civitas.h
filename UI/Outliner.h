#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class Outliner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Outliner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "Outliner") {}
    public:
        float Width() const { return ReadStaticField<float>("Width"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* left() const { return ReadField<void*>("left"); }
        void SetLeft(void* value) const { WriteField<void*>("left", value); }
        void* right() const { return ReadField<void*>("right"); }
        void SetRight(void* value) const { WriteField<void*>("right", value); }
        void* chevron() const { return ReadField<void*>("chevron"); }
        void SetChevron(void* value) const { WriteField<void*>("chevron", value); }
        int chevronOpen() const { return ReadField<int>("chevronOpen"); }
        void SetChevronOpen(int value) const { WriteField<int>("chevronOpen", value); }
        void* click() const { return ReadField<void*>("click"); }
        void SetClick(void* value) const { WriteField<void*>("click", value); }
        void* header() const { return ReadField<void*>("header"); }
        void SetHeader(void* value) const { WriteField<void*>("header", value); }
        void* headerText() const { return ReadField<void*>("headerText"); }
        void SetHeaderText(void* value) const { WriteField<void*>("headerText", value); }
        void* headerRow() const { return ReadField<void*>("headerRow"); }
        void SetHeaderRow(void* value) const { WriteField<void*>("headerRow", value); }
        void* rows() const { return ReadField<void*>("rows"); }
        bool folded() const { return ReadField<bool>("folded"); }
        void SetFolded(bool value) const { WriteField<bool>("folded", value); }
    };
}
