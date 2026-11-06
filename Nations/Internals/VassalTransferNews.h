#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class VassalTransferNews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalTransferNews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "VassalTransferNews") {}
    public:
        int vassalId() const { return ReadField<int>("vassalId"); }
        void vassalId(int value) const { WriteField<int>("vassalId", value); }
        int oldOverlordId() const { return ReadField<int>("oldOverlordId"); }
        void oldOverlordId(int value) const { WriteField<int>("oldOverlordId", value); }
        int newOverlordId() const { return ReadField<int>("newOverlordId"); }
        void newOverlordId(int value) const { WriteField<int>("newOverlordId", value); }
        bool playerAnswered() const { return ReadField<bool>("playerAnswered"); }
        void playerAnswered(bool value) const { WriteField<bool>("playerAnswered", value); }
        bool annexed() const { return ReadField<bool>("annexed"); }
        void annexed(bool value) const { WriteField<bool>("annexed", value); }
    };
}
