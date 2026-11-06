#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class FortificationManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FortificationManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "FortificationManager") {}
    public:
        void SetFortsVisible(bool visible) const { void* args[] = { &visible }; Call("SetFortsVisible", args, 1); }
        void* SiteAt(int tileIndex) const { void* args[] = { &tileIndex }; return Call("SiteAt", args, 1); }
        bool PlaceScenarioFort(int tileIndex, int type, int builderNationId, float progress) const { void* args[] = { &tileIndex, &type, &builderNationId, &progress }; return CallValue<bool>("PlaceScenarioFort", args, 4); }
        bool RemoveFortAt(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<bool>("RemoveFortAt", args, 1); }
    };
}
