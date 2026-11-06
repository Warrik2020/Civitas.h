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
        void SetFortsVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetFortsVisible", __callArgs, 1); }
        void* SiteAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return Call("SiteAt", __callArgs, 1); }
        bool PlaceScenarioFort(int tileIndex, int type, int builderNationId, float progress) const { void* __callArgs[] = { &tileIndex, &type, &builderNationId, &progress }; return CallValue<bool>("PlaceScenarioFort", __callArgs, 4); }
        bool RemoveFortAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<bool>("RemoveFortAt", __callArgs, 1); }
    };
}
