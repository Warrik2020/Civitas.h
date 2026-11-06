#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiInput") {}
    public:
        bool IsPointerOverUI() const { return CallStaticValue<bool>("IsPointerOverUI", nullptr, 0); }
        void ClaimEsc() const { CallStatic("ClaimEsc", nullptr, 0); }
        bool IsTypingInField() const { return CallStaticValue<bool>("IsTypingInField", nullptr, 0); }
        void EnsureEventSystem() const { CallStatic("EnsureEventSystem", nullptr, 0); }
        bool ModalOpen() const { return ReadStaticField<bool>("ModalOpen"); }
        void SetModalOpen(bool value) const { WriteStaticField<bool>("ModalOpen", value); }
        int LastEscClaimFrame() const { return ReadStaticField<int>("LastEscClaimFrame"); }
        void SetLastEscClaimFrame(int value) const { WriteStaticField<int>("LastEscClaimFrame", value); }
    };
}
